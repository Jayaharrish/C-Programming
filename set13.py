def main():
   a=input("")
   k=0
   for i in range(2,a//2+1):
     if(a%i==0):
        k=k+1
   if(k<=0):
    print("Y")
   else:
    print("N")
if __name__ == '__main__':
    main()
