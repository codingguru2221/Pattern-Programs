#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Utility functions
void printSpaces(int n)
{
    for (int i = 0; i < n; i++)
        cout << " ";
}

class PatternPrinter
{
public:
    // Basic Patterns (1-10)
    void pattern1(int n)
    {
        cout << "\n1. Basic Rectangle Pattern\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << "* ";
            cout << endl;
        }
    }

    void pattern2(int n)
    {
        cout << "\n2. Hollow Rectangle Pattern\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }

    void pattern3(int n)
    {
        cout << "\n3. Right Triangle\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
    }

    void pattern4(int n)
    {
        cout << "\n4. Inverted Right Triangle\n";
        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
                cout << "* ";
            cout << endl;
        }
    }

    void pattern5(int n)
    {
        cout << "\n5. Mirrored Right Triangle\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
                cout << "  ";
            for (int j = 1; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
    }

    void pattern6(int n)
    {
        cout << "\n6. Number Triangle\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << j << " ";
            cout << endl;
        }
    }

    void pattern7(int n)
    {
        cout << "\n7. Inverted Number Triangle\n";
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
                cout << j << " ";
            cout << endl;
        }
    }

    void pattern8(int n)
    {
        cout << "\n8. Binary Triangle\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << j % 2 << " ";
            cout << endl;
        }
    }

    void pattern9(int n)
    {
        cout << "\n9. Character Triangle\n";
        for (int i = 0; i < n; i++)
        {
            char ch = 'A';
            for (int j = 0; j <= i; j++)
                cout << ch++ << " ";
            cout << endl;
        }
    }

    void pattern10(int n)
    {
        cout << "\n10. Reverse Character Triangle\n";
        for (int i = n; i > 0; i--)
        {
            char ch = 'A';
            for (int j = 0; j < i; j++)
                cout << ch++ << " ";
            cout << endl;
        }
    }

    // Intermediate Patterns (11-20)
    void pattern11(int n)
    {
        cout << "\n11. Pyramid Pattern\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
                cout << " ";
            for (int j = 0; j < 2 * i + 1; j++)
                cout << "*";
            cout << endl;
        }
    }

    void pattern12(int n)
    {
        cout << "\n12. Inverted Pyramid Pattern\n";
        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < n - i; j++)
                cout << " ";
            for (int j = 0; j < 2 * i - 1; j++)
                cout << "*";
            cout << endl;
        }
    }

    void pattern13(int n)
    {
        cout << "\n13. Diamond Pattern\n";
        // Upper half
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
                cout << " ";
            for (int j = 0; j < 2 * i + 1; j++)
                cout << "*";
            cout << endl;
        }
        // Lower half
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = 0; j < n - i - 1; j++)
                cout << " ";
            for (int j = 0; j < 2 * i + 1; j++)
                cout << "*";
            cout << endl;
        }
    }

    void pattern14(int n)
    {
        cout << "\n14. Hollow Diamond Pattern\n";
        // Upper half
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || j == 2 * i - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
        // Lower half
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j <= n - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || j == 2 * i - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }

    void pattern15(int n)
    {
        cout << "\n15. Butterfly Pattern\n";
        // Upper half
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << "*";
            for (int j = 1; j <= 2 * (n - i); j++)
                cout << " ";
            for (int j = 1; j <= i; j++)
                cout << "*";
            cout << endl;
        }
        // Lower half
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
                cout << "*";
            for (int j = 1; j <= 2 * (n - i); j++)
                cout << " ";
            for (int j = 1; j <= i; j++)
                cout << "*";
            cout << endl;
        }
    }

    // Add these patterns to the PatternPrinter class:

    // Advanced Number Patterns (16-25)
    void pattern16(int n)
    {
        cout << "\n16. Floyd's Triangle\n";
        int number = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << setw(3) << number++ << " ";
            }
            cout << endl;
        }
    }

    void pattern17(int n)
    {
        cout << "\n17. Pascal's Triangle\n";
        for (int line = 1; line <= n; line++)
        {
            int C = 1;
            for (int i = 1; i <= n - line; i++)
                cout << "  ";
            for (int i = 1; i <= line; i++)
            {
                cout << setw(3) << C << " ";
                C = C * (line - i) / i;
            }
            cout << endl;
        }
    }

    void pattern18(int n)
    {
        cout << "\n18. Number Diamond\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
                cout << "  ";
            for (int j = i; j >= 1; j--)
                cout << j << " ";
            for (int j = 2; j <= i; j++)
                cout << j << " ";
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j <= n - i; j++)
                cout << "  ";
            for (int j = i; j >= 1; j--)
                cout << j << " ";
            for (int j = 2; j <= i; j++)
                cout << j << " ";
            cout << endl;
        }
    }

    void pattern19(int n)
    {
        cout << "\n19. Fibonacci Pattern\n";
        int a = 0, b = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << setw(3) << a << " ";
                int c = a + b;
                a = b;
                b = c;
            }
            cout << endl;
        }
    }

    void pattern20(int n)
    {
        cout << "\n20. Alternating Number Pattern\n";
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if ((i + j) % 2 == 0)
                    cout << "1 ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }

    // Advanced Character Patterns (21-25)
    void pattern21(int n)
    {
        cout << "\n21. Character Diamond\n";
        for (int i = 0; i < n; i++)
        {
            char ch = 'A';
            for (int j = 0; j < n - i - 1; j++)
                cout << "  ";
            for (int j = 0; j <= i; j++)
                cout << ch++ << " ";
            ch--;
            for (int j = 0; j < i; j++)
                cout << --ch << " ";
            cout << endl;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            char ch = 'A';
            for (int j = 0; j < n - i - 1; j++)
                cout << "  ";
            for (int j = 0; j <= i; j++)
                cout << ch++ << " ";
            ch--;
            for (int j = 0; j < i; j++)
                cout << --ch << " ";
            cout << endl;
        }
    }

    void pattern22(int n)
    {
        cout << "\n22. Spiral Character Pattern\n";
        char matrix[20][20];
        int top = 0, bottom = n - 1, left = 0, right = n - 1;
        char ch = 'A';

        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
                matrix[top][i] = ch++;
            top++;

            for (int i = top; i <= bottom; i++)
                matrix[i][right] = ch++;
            right--;

            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    matrix[bottom][i] = ch++;
                bottom--;
            }

            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    matrix[i][left] = ch++;
                left++;
            }
        }

        // Print the spiral
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
    }

    void pattern23(int n)
    {
        cout << "\n23. Character Wave\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char ch = char('A' + (i + j) % 26);
                cout << ch << " ";
            }
            cout << endl;
        }
    }

    // Geometric Patterns (24-30)
    void pattern24(int n)
    {
        cout << "\n24. Arrow Pattern\n";
        // Upper part
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
                cout << "  ";
            cout << "* ";
            cout << endl;
        }
        // Lower part
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
                cout << "  ";
            cout << "* ";
            cout << endl;
        }
    }

    void pattern25(int n)
    {
        cout << "\n25. Double Arrow Pattern\n";
        // Upper part
        for (int i = 1; i <= n; i++)
        {
            // Left arrow
            for (int j = 1; j <= i; j++)
                cout << "*";
            for (int j = 1; j <= 2 * (n - i); j++)
                cout << " ";
            // Right arrow
            for (int j = 1; j <= i; j++)
                cout << "*";
            cout << endl;
        }
        // Lower part
        for (int i = n; i >= 1; i--)
        {
            // Left arrow
            for (int j = 1; j <= i; j++)
                cout << "*";
            for (int j = 1; j <= 2 * (n - i); j++)
                cout << " ";
            // Right arrow
            for (int j = 1; j <= i; j++)
                cout << "*";
            cout << endl;
        }
    }

    // Special Patterns (26-30)
    void pattern26(int n)
    {
        cout << "\n26. Heart Pattern\n";
        for (int i = n / 2; i <= n; i += 2)
        {
            for (int j = 1; j < n - i; j += 2)
                cout << " ";
            for (int j = 1; j <= i; j++)
                cout << "*";
            for (int j = 1; j <= n - i; j++)
                cout << " ";
            for (int j = 1; j <= i; j++)
                cout << "*";
            cout << endl;
        }
        for (int i = n; i >= 1; i--)
        {
            for (int j = i; j < n; j++)
                cout << " ";
            for (int j = 1; j <= (i * 2) - 1; j++)
                cout << "*";
            cout << endl;
        }
    }

    void pattern27(int n)
    {
        cout << "\n27. Clock Pattern\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == n / 2 || j == n / 2)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }

    void pattern28(int n)
    {
        cout << "\n28. Diagonal Pattern\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j || i + j == n - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }

    void pattern29(int n)
    {
        cout << "\n29. Spiral Number Pattern\n";
        int matrix[20][20];
        int top = 0, bottom = n - 1, left = 0, right = n - 1;
        int num = 1;

        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
                matrix[top][i] = num++;
            top++;

            for (int i = top; i <= bottom; i++)
                matrix[i][right] = num++;
            right--;

            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    matrix[bottom][i] = num++;
                bottom--;
            }

            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    matrix[i][left] = num++;
                left++;
            }
        }

        // Print the spiral
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << setw(3) << matrix[i][j] << " ";
            cout << endl;
        }
    }

    void pattern30(int n)
    {
        cout << "\n30. Wave Pattern\n";
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
};

// Main menu function
void showMenu()
{
    cout << "\n=== Pattern Printing Program ===\n";
    cout << "Basic Patterns (1-10):\n";
    cout << "1. Basic Rectangle\n";
    cout << "2. Hollow Rectangle\n";
    cout << "3. Right Triangle\n";
    cout << "4. Inverted Right Triangle\n";
    cout << "5. Mirrored Right Triangle\n";
    cout << "6. Number Triangle\n";
    cout << "7. Inverted Number Triangle\n";
    cout << "8. Binary Triangle\n";
    cout << "9. Character Triangle\n";
    cout << "10. Reverse Character Triangle\n";

    cout << "\nIntermediate Patterns (11-15):\n";
    cout << "11. Pyramid Pattern\n";
    cout << "12. Inverted Pyramid\n";
    cout << "13. Diamond Pattern\n";
    cout << "14. Hollow Diamond\n";
    cout << "15. Butterfly Pattern\n";

    cout << "\nAdvanced Number Patterns (16-20):\n";
    cout << "16. Floyd's Triangle\n";
    cout << "17. Pascal's Triangle\n";
    cout << "18. Number Diamond\n";
    cout << "19. Fibonacci Pattern\n";
    cout << "20. Alternating Number Pattern\n";

    cout << "\nAdvanced Character Patterns (21-23):\n";
    cout << "21. Character Diamond\n";
    cout << "22. Spiral Character Pattern\n";
    cout << "23. Character Wave\n";

    cout << "\nGeometric Patterns (24-25):\n";
    cout << "24. Arrow Pattern\n";
    cout << "25. Double Arrow Pattern\n";

    cout << "\nSpecial Patterns (26-30):\n";
    cout << "26. Heart Pattern\n";
    cout << "27. Clock Pattern\n";
    cout << "28. Diagonal Pattern\n";
    cout << "29. Spiral Number Pattern\n";
    cout << "30. Wave Pattern\n";

    // More menu options will be added
    cout << "\n0. Exit\n";
}

int main()
{
    PatternPrinter printer;
    int choice, n;

    do
    {
        showMenu();
        cout << "\nEnter your choice (0-15): ";
        cin >> choice;

        if (choice != 0)
        {
            cout << "Enter the size (n): ";
            cin >> n;

            switch (choice)
            {
            case 1:
                printer.pattern1(n);
                break;
            case 2:
                printer.pattern2(n);
                break;
            case 3:
                printer.pattern3(n);
                break;
            case 4:
                printer.pattern4(n);
                break;
            case 5:
                printer.pattern5(n);
                break;
            case 6:
                printer.pattern6(n);
                break;
            case 7:
                printer.pattern7(n);
                break;
            case 8:
                printer.pattern8(n);
                break;
            case 9:
                printer.pattern9(n);
                break;
            case 10:
                printer.pattern10(n);
                break;
            case 11:
                printer.pattern11(n);
                break;
            case 12:
                printer.pattern12(n);
                break;
            case 13:
                printer.pattern13(n);
                break;
            case 14:
                printer.pattern14(n);
                break;
            case 15:
                printer.pattern15(n);
                break;
            case 16:
                printer.pattern16(n);
                break;
            case 17:
                printer.pattern17(n);
                break;
            case 18:
                printer.pattern18(n);
                break;
            case 19:
                printer.pattern19(n);
                break;
            case 20:
                printer.pattern20(n);
                break;
            case 21:
                printer.pattern21(n);
                break;
            case 22:
                printer.pattern22(n);
                break;
            case 23:
                printer.pattern23(n);
                break;
            case 24:
                printer.pattern24(n);
                break;
            case 25:
                printer.pattern25(n);
                break;
            case 26:
                printer.pattern26(n);
                break;
            case 27:
                printer.pattern27(n);
                break;
            case 28:
                printer.pattern28(n);
                break;
            case 29:
                printer.pattern29(n);
                break;
            case 30:
                printer.pattern30(n);
                break;
            default:
                cout << "Invalid choice!\n";
            }
        }
    } while (choice != 0);

    cout << "Thank you for using the pattern printer!\n";
    return 0;
}