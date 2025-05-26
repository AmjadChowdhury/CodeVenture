import cv2
cam = cv2.VideoCapture(1)

while True:
    _,frame = cam.read()
    cv2.imshow('My cam',frame)
    cv2.waitkey(1)