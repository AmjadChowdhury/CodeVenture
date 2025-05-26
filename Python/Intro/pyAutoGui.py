import pyautogui

pyautogui.write('Hello world!', interval=0.25)
pyautogui.press('enter')

screenWidth, screenHeight = pyautogui.size()
print(screenWidth,screenHeight)

# Hello world!

