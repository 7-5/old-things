import os
from PIL import Image

# specify the directory containing the .webp files
webp_dir = "C:\ANCIENT_ALCHEMIC_CONVERTER\webpinput" # yeah that directory exists

# specify the directory where the .png files will be saved
png_dir = "C:\ANCIENT_ALCHEMIC_CONVERTER\pngoutput" # that too exists.

# loop through all the .webp files in the directory
for file in os.listdir(webp_dir):
    if file.endswith(".webp"):
        # open the .webp file using the Image module
        webp_image = Image.open(os.path.join(webp_dir, file))
        # save the .webp image as a .png file in the specified directory
        webp_image.save(os.path.join(png_dir, file.replace(".webp", ".png")))