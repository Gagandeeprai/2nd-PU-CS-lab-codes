import webbrowser
import time

url = "https://jeemain.nta.ac.in/"
webbrowser.open(url)

while True:
    webbrowser.get().refresh(url)
    time.sleep(120)