a = gets.split(' ').map(&:to_i)
if a[0] > a[1] 
    p a[0] - 1
else
    p a[0]
end