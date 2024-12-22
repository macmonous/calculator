Module Calculator
    Sub Main()
        Dim choice As Integer
        Do
            Console.WriteLine("Calculator")
            Console.WriteLine("1. Addition")
            Console.WriteLine("2. Subtraction")
            Console.WriteLine("3. Multiplication")
            Console.WriteLine("4. Division")
            Console.WriteLine("5. Power")
            Console.WriteLine("6. Square Root")
            Console.WriteLine("7. Exit")
            Console.Write("Choose an option: ")
            choice = Console.ReadLine()

            Select Case choice
                Case 1 To 6
                    Console.Write("Enter the first number: ")
                    Dim num1 As Double = Console.ReadLine()
                    Dim num2 As Double = 0
                    If choice <> 6 Then
                        Console.Write("Enter the second number: ")
                        num2 = Console.ReadLine()
                    End If

                    Select Case choice
                        Case 1
                            Console.WriteLine("Result: " & (num1 + num2))
                        Case 2
                            Console.WriteLine("Result: " & (num1 - num2))
                        Case 3
                            Console.WriteLine("Result: " & (num1 * num2))
                        Case 4
                            If num2 = 0 Then
                                Console.WriteLine("Cannot divide by zero!")
                            Else
                                Console.WriteLine("Result: " & (num1 / num2))
                            End If
                        Case 5
                            Console.WriteLine("Result: " & Math.Pow(num1, num2))
                        Case 6
                            Console.WriteLine("Result: " & Math.Sqrt(num1))
                    End Select
                Case 7
                    Exit Do
                Case Else
                    Console.WriteLine("Invalid choice!")
            End Select
        Loop
        Console.WriteLine("Goodbye!")
    End Sub
End Module
