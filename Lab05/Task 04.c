#include <stdio.h>

int main()
{
    int category, choice;

    printf("=== AI Chatbot ===\n");
    printf("Select Category\n");
    printf("1. Greeting\n2. Study\n3. Weather\n4. Help\n");
    printf("Enter choice: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("Greeting Options\n");
            printf("1. Hello\n2. How are you\n3. Goodbye\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Chatbot: Hello! Nice to meet you.\n");
                    break;
                case 2:
                    printf("Chatbot: I am fine, thank you! How are you?\n");
                    break;
                case 3:
                    printf("Chatbot: Goodbye! Have a nice day.\n");
                    break;
                default:
                    printf("Chatbot: Invalid option.\n");
            }
            break;

        case 2:
            printf("Study Options\n");
            printf("1. Programming\n2. Mathematics\n3. AI\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Chatbot: Practice writing C programs every day.\n");
                    break;
                case 2:
                    printf("Chatbot: Solve as many problems as you can.\n");
                    break;
                case 3:
                    printf("Chatbot: Start with the basics of machine learning.\n");
                    break;
                default:
                    printf("Chatbot: Invalid option.\n");
            }
            break;

        case 3:
            printf("Weather Options\n");
            printf("1. Today\n2. Tomorrow\n3. Forecast\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Chatbot: Today is sunny.\n");
                    break;
                case 2:
                    printf("Chatbot: Tomorrow will be cloudy.\n");
                    break;
                case 3:
                    printf("Chatbot: The forecast shows mild weather this week.\n");
                    break;
                default:
                    printf("Chatbot: Invalid option.\n");
            }
            break;

        case 4:
            printf("Help Options\n");
            printf("1. About Chatbot\n2. Commands\n3. Exit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Chatbot: I am a simple rule-based chatbot.\n");
                    break;
                case 2:
                    printf("Chatbot: Choose a category and then an option from the menu.\n");
                    break;
                case 3:
                    printf("Chatbot: Exiting. Goodbye!\n");
                    break;
                default:
                    printf("Chatbot: Invalid option.\n");
            }
            break;

        default:
            printf("Chatbot: Invalid category.\n");
    }

    return 0;
}
