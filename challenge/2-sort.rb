#!/usr/bin/ruby
arguments = ARGV
numbers = arguments.select { |arg| arg =~ /^-?\d+$/ }
sorted_numbers = numbers.map(&:to_i).sort
sorted_numbers.each { |n| puts n }
