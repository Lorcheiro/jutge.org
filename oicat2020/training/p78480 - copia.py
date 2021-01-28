from PIL import Image, ImageDraw

n = int(input())

img = Image.new('RGB', (8 * n, 8 * n), 'White')
dib = ImageDraw.Draw(img)

#int main()

dib.ellipse([0, 0, (8 * n) - 1, (8 * n) - 1], 'Blue')
dib.ellipse([n, n, (6 * n - 1) + n, (6 * n - 1) + n], 'Yellow')
dib.ellipse([2 * n, 2 * n, (4 * n - 1) + 2 * n, (4 * n - 1) + 2 * n], 'Red')
dib.ellipse([3 * n, 3 * n, (2 * n - 1) + 3 * n, (2 * n - 1) + 3 * n], 'Green')	





img.save('output.png')