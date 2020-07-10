a = gets.split(' ').map(&:to_i)
for i in 0..a[0] do
  if (i * 2 + (a[0]-i) * 4) == a[1] then
    puts('Yes')
    return 0
  end
end
puts('No')