   row = [1]
   k = [0]
   for x in range(max(5,0)):
      print row
      row=[l+r for l,r in zip(row+k,k+row)]
   return 5>=1
