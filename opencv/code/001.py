import sys
import cv2

img = cv2.imread('cat.jpg')

if img is None:
    print('NOPE')
    sys.exit()

cv2.namedWindow('image')
cv2.imshow('image', img)
cv2.waitKey()

cv2.destroyAllWindows()