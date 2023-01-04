import os
import subprocess
import time

addonbuilder = "F:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder"
img2paa = "F:\SteamLibrary\steamapps\common\Arma 3 Tools\ImageToPAA"

in_path = "G:\Github Repos\\training_equipment_revamped"
out_path = "G:\Github Repos\\training_equipment_revamped\@training_equipment\\addons"

def imgToPaa(img2paa,in_path):

    for (dir_path, dir_names, file_names) in os.walk(in_path):

        for file_name in file_names:

            if (file_name.endswith(".png")):

                file_name_dir = f"\n\n\n{dir_path}\\{file_name[:-4]}\n\n\n"

                subprocess.call([f"{img2paa}\ImageToPAA.exe", f"{file_name_dir}.png", f"{file_name_dir}.paa"])

                #print(file_name_dir)

                #print(f"\n\n\nConverting {file_name} from .png to .paa\n\n\n")

    # print("Finished image conversion. Starting to pack.")

    # time.sleep(3)

def packAllPbo(addonbuilder,img2paa,in_path,out_path):

    directories = os.walk(f"{in_path}")
    dirpath, dirnames, filenames = next(directories)

    #for i in range(len(dirnames)):
    #os.system("pause")
    #imgToPaa(img2paa,in_path)
    for folder in os.listdir(in_path):
        isFile = os.path.isfile(f"{folder}")
        notAllowed = ["@", ".git", ".vscode"]
        #reiterate through the notAllowed extensions or keywords, stops things like mod folders being packed
        for folderName in notAllowed:
            if (folderName in str(folder)):
                isFile = True

        if (isFile == False):
            print(f"\033[1;32m{in_path}/{folder} was a folder, packing\n\n\n\n\n")
            subprocess.call([f"{addonbuilder}\AddonBuilder.exe", f"{in_path}/{folder}", out_path, "-clear", "-temp", "-binarizeNoLogs", f"-include={in_path}/include.txt"]) # use the include.txt
        else:
            print(f"{in_path}/{folder} was not a folder, not packing\n\n\n\n\n")

packAllPbo(addonbuilder, img2paa, in_path, out_path)