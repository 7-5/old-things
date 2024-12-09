import os

def reverse_binary(file_path):
    with open(file_path, 'rb') as file:
        content = bytearray(file.read())
        content.reverse()

    with open(file_path, 'wb') as file:
        file.write(content)

# Get the current directory
current_dir = os.getcwd()

# Find all files with .7z extension in the current directory
rar_files = [file for file in os.listdir(current_dir) if file.endswith('.7z')]

# Reverse the content of each rar file
for rar_file in rar_files:
    file_path = os.path.join(current_dir, rar_file)
    reverse_binary(file_path)
    print(f'{rar_file} has been reversed.')

print("Binary content reversal complete.")

#thank you gpt for code.
