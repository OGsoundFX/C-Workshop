string = "Hello World"

capitalized_string = string.split(" ").map do |word|
  word.capitalize
end.join(" ")

puts capitalized_string
