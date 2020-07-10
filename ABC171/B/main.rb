nk = gets.split(' ').map(&:to_i)
pp = gets.split(' ').map(&:to_i)
pp =  pp.sort{|a, b| a.to_i <=> b.to_i }

res = 0
for i in 0..nk[1]-1 do
  res += pp[i]
end
p res