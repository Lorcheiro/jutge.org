from PIL import Image, ImageDraw

n = int(input())

img = Image.new('RGB', (8 * n, 8 * n), 'White')
dib = ImageDraw.Draw(img)

#int main()

dib.ellipse([0, 0, (8 * n) - 1, (8 * n) - 1], 'Blue')
dib.ellipse([x1, y1, x2, y2], 'Yellow')
dib.ellipse([x1, y1, x2, y2], 'Red')
dib.ellipse([x1, y1, x2, y2], 'Green')





img.save('output.png')