#!/usr/bin/ruby
args = ARGV.map { |arg| arg.to_i rescue nil }.compact
puts args.sort
