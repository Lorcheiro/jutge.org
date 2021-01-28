from PIL import Image, ImageDraw
 
back = str(input())
c1 = str(input())
c2 = str(input())
c3 = str(input())
n = int(input())
 
l = 25*(2**n)
 
img = Image.new('RGB', (l, l), back)
dib = ImageDraw.Draw(img)
i = 1
 
if (n != 0):
    dib.ellipse([0, 0, l/2**i-1, l/2**i-1], c2)
    dib.ellipse([l/2, 0, l-1, l/2-1], c3)
    dib.ellipse([0, l/2, l/2-1, l-1], c1)
 
v = l/2**i
 
while (n > 1): 
    d = (l/(2**(i+1)) + v) - v
    dib.ellipse([v, v, (l/(2**(i+1)) + v)-1, (l/(2**(i+1)) + v)-1], c2)
    dib.ellipse([v+d, v, l-1,(l/(2**(i+1)) + v)-1], c3)
    print ("x2 ", l-1, " y2 ", (l/(2**(i+1)) + v)-1)
    dib.ellipse([v, v+d, (l/(2**(i+1)) + v)-1, l-1], c1)
   
    v = (l/(2**(i+1)) + v)
    i += 1
    n -= 1
 
img.save('output.png')