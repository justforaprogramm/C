import os
from glob import glob
def main():
    for file in glob('*'):
        if not '.' in file:
            os.remove(file)

if __name__ == '__main__':
    main()