puts "Type in a number"
num = gets.chomp.to_i

puts "Your number is #{num.even? ? "even" : "odd"}"
