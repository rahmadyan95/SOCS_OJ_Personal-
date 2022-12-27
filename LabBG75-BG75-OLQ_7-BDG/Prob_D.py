def minimal_difference(heights):
  # menyortir tinggi badan mahasiswa
  heights.sort()
  
  # mengelompokkan mahasiswa menjadi dua kelompok
  group1 = heights[:len(heights)//2]
  group2 = heights[len(heights)//2:]
  
  # menghitung perbedaan tinggi badan terbesar dari setiap pasangan mahasiswa yang bersebelahan di kelompok pertama
  max_difference1 = 0
  for i in range(len(group1)-1):
    diff = abs(group1[i] - group1[i+1])
    if diff > max_difference1:
      max_difference1 = diff
      
  # menghitung perbedaan tinggi badan terbesar dari setiap pasangan mahasiswa yang bersebelahan di kelompok kedua
  max_difference2 = 0
  for i in range(len(group2)-1):
    diff = abs(group2[i] - group2[i+1])
    if diff > max_difference2:
      max_difference2 = diff
      
  # menentukan perbedaan tinggi badan terbesar yang paling minimal
  if max_difference1 > max_difference2:
    return max_difference1
  else:
    return max_difference2

# meminta input dari keyboard
t = int(input())
for i in range(t):
  n = int(input())
  heights = list(map(int, input().split()))

  # menampilkan hasil
  print("Case #" + str(i+1) + ":", minimal_difference(heights))