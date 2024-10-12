
# Function to calculate CGPA
def calculate_cgpa(grades, credits):
    total_grade_points = 0
    total_credits = 0

    # Loop through each subject's grade and credit
    for i in range(len(grades)):
        total_grade_points += grades[i] * credits[i]
        total_credits += credits[i]

    # CGPA is the total grade points divided by total credits
    cgpa = total_grade_points / total_credits
    return cgpa

def main():
    subjects = int(input("Enter the number of subjects: "))

    grades = []
    credits = []

    # Get grades and credits for each subject
    for i in range(subjects):
        print(f"\nSubject {i + 1}:")
        grade = float(input("Enter your grade (on a 10-point scale): "))
        credit = float(input("Enter the credit for this subject: "))
        
        grades.append(grade)
        credits.append(credit)

    # Calculate CGPA
    cgpa = calculate_cgpa(grades, credits)

    print(f"\nYour CGPA is: {cgpa:.2f}")

if __name__ == "__main__":
    main()
