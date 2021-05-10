import sys
import cv2

img1 = cv2.imread('cat.jpg', cv2.IMREAD_GRAYSCALE)
img2 = cv2.imread('cat.jpg', cv2.IMREAD_COLOR)

print('type(img1):', type(img1))
print('img1.shape:', img1.shape)
print('img2.shape:', img2.shape)
print('img2.type:', img2.dtype)

h, w = img2.shape[:2]

print('img2 size: {} x {}'.format(w, h))

if len(img1.shape) == 2:
    print('img1 is a grayscale image')
elif len(img1.shape) == 3:
    print('img1 is a tricolor image')

cv2.imshow("i",img1)
cv2.imshow("i2",img2)
cv2.waitKey()
cv2.destroyAllWindows()