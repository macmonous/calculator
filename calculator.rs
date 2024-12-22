use std::io;

fn show_menu() {
    println!("Calculator");
    println!("1. Addition");
    println!("2. Subtraction");
    println!("3. Multiplication");
    println!("4. Division");
    println!("5. Power");
    println!("6. Square Root");
    println!("7. Logarithm");
    println!("8. Sine");
    println!("9. Cosine");
    println!("10. Tangent");
    println!("0. Exit");
}

fn main() {
    loop {
        show_menu();
        println!("Choose an option: ");
        let mut choice = String::new();
        io::stdin().read_line(&mut choice).unwrap();
        let choice: i32 = match choice.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Invalid input. Please enter a number.");
                continue;
            }
        };

        if choice == 0 {
            println!("Goodbye!");
            break;
        }

        match choice {
            1..=10 => {
                let mut input1 = String::new();
                let mut input2 = String::new();
                println!("Enter the first number: ");
                io::stdin().read_line(&input1).unwrap();
                let num1: f64 = input1.trim().parse().unwrap_or_else(|_| {
                    println!("Invalid number!");
                    0.0
                });

                if choice <= 5 {
                    println!("Enter the second number: ");
                    io::stdin().read_line(&input2).unwrap();
                }

                let num2: f64 = if choice <= 5 {
                    input2.trim().parse().unwrap_or_else(|_| {
                        println!("Invalid number!");
                        0.0
                    })
                } else {
                    0.0
                };

                let result = match choice {
                    1 => num1 + num2,
                    2 => num1 - num2,
                    3 => num1 * num2,
                    4 => {
                        if num2 == 0.0 {
                            println!("Cannot divide by zero!");
                            continue;
                        }
                        num1 / num2
                    }
                    5 => num1.powf(num2),
                    6 => num1.sqrt(),
                    7 => num1.ln(),
                    8 => num1.sin(),
                    9 => num1.cos(),
                    10 => num1.tan(),
                    _ => {
                        println!("Invalid choice!");
                        0.0
                    }
                };
                println!("Result: {}", result);
            }
            _ => println!("Invalid choice!"),
        }
    }
}

