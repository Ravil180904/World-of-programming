from pydub import AudioSegment
import sys
import os
#import pyaudioop as audioop

def merge_mp3_files(input_files, output_file):
    if not input_files:
        print("No input files provided.")
        return

    merged = AudioSegment.empty()
    for file in input_files:
        if not os.path.exists(file):
            print(f"File not found: {file}")
            continue
        audio = AudioSegment.from_mp3(file)
        merged += audio

    merged.export(output_file, format="mp3")
    print(f"Merged {len(input_files)} files into {output_file}")

if __name__ == "__main__":
    if len(sys.argv) < 4:
        print("Usage: python merge_mp3.py output.mp3 input1.mp3 input2.mp3 ...")
        sys.exit(1)

    output_mp3 = sys.argv[1]
    input_mp3s = sys.argv[2:]
    merge_mp3_files(input_mp3s, output_mp3)