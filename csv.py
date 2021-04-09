#csv-comma seperate values
#it is like excel like rows and columns
#to write a csv file
import csv
with open('student.csv',"w",newline='')as file:
    reynolds=csv.writer(file)
    reynolds.writerow(['STD','SNAME','STUADDRESS'])
    count=int(input('enter number'))
    for i in range(count):
        sid=int(input('enter student id'))
        sname=input('enter student name')
        staddress=input('enter student address')
        reynolds.writerow([sid,sname,staddress])




#to read a file
import csv
with open('student.csv','r',newline='') as file:
    r=csv.reader(file)
    output=list(r)
    for line in output:
        for eachline in line:
            print(eachline,end=' ')
        print()
