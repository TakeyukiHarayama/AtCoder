N = gets.to_i
A = gets.split(' ').map(&:to_i)

if A.include?(0)
    p 0
    exit
end

res = 1
A.each do |a|
    res *= a
    if res > 1.0e18
        p -1
        exit
    end
end

p res
