def calculate_final_grade(deliverables,weights):
    final_grade = 0
    for x in range(len(deliverables)):
        grade = float(input(f"Enter {deliverables[x]} grade: "))
        final_grade += grade * weights[x]
    return final_grade

if __name__ == "__main__":
    mark = calculate_final_grade(
        ["assignment","midterm", "tutorial", "exam"],
        [0.5,0.15,0.1,0.25]
    )
    print(f"Final Grade: {mark:.2f}")