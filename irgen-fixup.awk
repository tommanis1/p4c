/^#$/ { printf "#line %d \"/media/t/scratch/p4/p4c/ir/%s\"\n", NR+1, name; next; } 1
