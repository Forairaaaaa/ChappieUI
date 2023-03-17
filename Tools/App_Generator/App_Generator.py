import os as os
from shutil import copyfile



app_name = ""
def getAppName():
    global app_name
    app_name = input("> Please input your App name: ")



def creteApp():
    # Get file name
    folder_name = "App_" + app_name
    source_file_name = "App_" + app_name + "/App_" + app_name + ".cpp"
    header_file_name = "App_" + app_name + "/App_" + app_name + ".h"
    print("File names:\n - {}\n - {}".format(source_file_name, header_file_name))
    # Create folder
    os.mkdir(folder_name)
    # Create files 
    source_file = open(source_file_name, mode='w+')
    header_file = open(header_file_name, mode='w+')
    # Read Template content
    content_source_file = open("Resource/App_Template/App_Template.cpp", mode='r').read()
    content_header_file = open("Resource/App_Template/App_Template.h", mode='r').read()
    # Rename
    content_source_file = content_source_file.replace("Template", app_name)
    content_header_file = content_header_file.replace("Template", app_name)
    # Write in
    source_file.write(content_source_file)
    header_file.write(content_header_file)
    # Close files
    source_file.close()
    header_file.close()



if __name__=="__main__":
    print("> ChappieUI App generator <")
    
    while True:
        getAppName()
        if app_name != "":
            break
        print("X Error name, please try again")
    print("Get App name: {}".format(app_name))
    
    creteApp()

    print("Done")

