a = gets.split(' ').map(&:to_i)

p ((a[1] - a[0]) * (a[1] - a[0] + 1) / 2) - a[1]