A = gets.split(' ').map(&:to_i)

if A[0] > 8 || A[1] > 8
    puts(':(');
else
    puts('Yay!');
end