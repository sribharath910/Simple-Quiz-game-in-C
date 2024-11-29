#include <stdio.h>
void Quiz() {
    int score = 0;
    int choice;
    printf("Welcome to the India GK Quiz!\n");
    printf("-----------------------------\n");
    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is New Delhi.\n");
    }

    // Question 2
    printf("\n2. Who is known as the Father of the Nation in India?\n");
    printf("1. Jawaharlal Nehru\n2. Mahatma Gandhi\n3. B. R. Ambedkar\n4. Subhash Chandra Bose\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Mahatma Gandhi.\n");
    }

    // Question 3
    printf("\n3. Which is the largest state in India by area?\n");
    printf("1. Maharashtra\n2. Uttar Pradesh\n3. Rajasthan\n4. Madhya Pradesh\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Rajasthan.\n");
    }

    // Question 4
    printf("\n4. Which river is known as the 'Sorrow of Bihar'?\n");
    printf("1. Yamuna\n2. Kosi River\n3. Ganga\n4. Brahmaputra\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Kosi River.\n");
    }

    // Question 5
    printf("\n5. What is the national animal of India?\n");
    printf("1. Elephant\n2. Peacock\n3. Tiger\n4. Lion\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Tiger.\n");
    }

    // Question 6
    printf("\n6. Who was the first President of India?\n");
    printf("1. Jawaharlal Nehru\n2. Rajendra Prasad\n3. Sardar Patel\n4. Indira Gandhi\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Rajendra Prasad.\n");
    }

    // Question 7
    printf("\n7. Which is the smallest state in India by area?\n");
    printf("1. Goa\n2. Sikkim\n3. Tripura\n4. Mizoram\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Goa.\n");
    }

    // Question 8
    printf("\n8. Which monument is known as the symbol of love in India?\n");
    printf("1. India Gate\n2. Taj Mahal\n3. Qutub Minar\n4. Charminar\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Taj Mahal.\n");
    }

    // Question 9
    printf("\n9. When did India gain independence?\n");
    printf("1. 1945\n2. 1947\n3. 1950\n4. 1952\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 1947.\n");
    }

    // Question 10
    printf("\n10. Which Indian scientist is known for the discovery of the Raman Effect?\n");
    printf("1. C. V. Raman\n2. Homi Bhabha\n3. Vikram Sarabhai\n4. Jagadish Chandra Bose\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C. V. Raman.\n");
    }
    printf("\n-----------------------------\n");
    printf("Quiz Over! Your final score: %d/10\n", score);

    if (score == 10) {
        printf("Excellent! You are a GK genius!\n");
    } else if (score >= 7) {
        printf("Good job! You have a solid knowledge of India.\n");
    } else {
        printf("Keep learning! Brush up on your GK about India.\n");
    }
}

int main() {
    Quiz();
    return 0;
}
