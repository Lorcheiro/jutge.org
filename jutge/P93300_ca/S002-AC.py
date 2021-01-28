from PIL import Image, ImageDraw

a = int(input())
b = int(input())


img = Image.new('RGB', (a+b, a+b), 'Black')
dib = ImageDraw.Draw(img)


dib.polygon([(0,0), (a-1,0), (0,b-1)], 'Red')
dib.polygon([(a,0), ((a+b)-1,0), ((a+b)-1, a-1)], 'Yellow')
dib.polygon([((a+b)-1, a), (a+b-1, a+b-1), (b,a+b-1)], 'Green')
dib.polygon([(0,b), (0,a+b-1), (b-1, a+b-1)], 'Blue')


img.save("output.png")