a = []
a[0], a[1], a[2] = gets.split.map(&:to_i)
a = a.sort

puts (a[1] - a[0]) + (a[2] - a[1])