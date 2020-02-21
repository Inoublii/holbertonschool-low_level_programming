#!/usr/bin/python3
"""Island_perimeter function"""
def island_perimeter(grid):
	s = 0
	i = 1
	for i in [len[grid-1]]:
		for j in [len[grid-1]]:
			for i,j in grid:
				if grid[i][j] == 1:
					if grid[i-1][j] == 0:
						s += 1
					if grid[i+1][j] == 0:
						s += 1
					if grid[i][j-1] == 0:
						s += 1
					if grid[i-1][j+1] == 0:
						s += 1
	return (s)


