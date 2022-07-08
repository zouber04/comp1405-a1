def calculate_final_grade(deliverables,weights):
    pass



assign = input('Enter Assignment Grade:')
midterm = input('Enter Midterm Grade:')
tutor= input('Enter tutorial Grade:')
exam = input('Enter Exam Grade:')
pres = input("Enter presentation mark: ")


mark = assign*0.5+midterm*0.15+tutor*0.1+exam*0.25+pres*0.45

print("Mark is: "+str(mark))