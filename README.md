# ft_printf 🖨

This project was

<img width="145" alt="198196171-b192d5df-4716-4a9f-9989-ad72297c9426" src="https://user-images.githubusercontent.com/118260014/201893093-da5da66e-c432-4a59-9b9a-1063c7c67d88.png">

<img width="145" alt="198196169-4ac83870-c3ca-46cb-865b-9c60f488d4ce" src="https://user-images.githubusercontent.com/118260014/201893111-23bcc41e-67ce-465d-9b27-f7d7c9d18d70.png">

It's an implementation of the printf built-in command.
The following converions are handled in this project:

- %s (string)
- %u (unsigned decimal)
- %i (integer)
- %d (decimal)
- %p (pointer)
- %x (lower case hexadecimal)
- %X (upper case hexadecimal)
- %c (character)
- %% (percentage)

, Also a main file is uploaded to check, test and compare my project conversions to the main printf built-in command output to display the result similarities.

To run this project please follow the following steps:

- cd ft_printf

<img width="535" alt="198573347-6d6b15fc-b2db-4837-8224-e3869f2f1836" src="https://user-images.githubusercontent.com/118260014/201893164-65b7e79f-f99b-4e8e-aa1e-02bca581ebec.png">

- make

<img width="573" alt="198119198-e4ac52fc-fb17-49f1-873b-ce9a164e5413" src="https://user-images.githubusercontent.com/118260014/201893197-ecbbc5f4-8bc3-460c-b8e0-5082247aaa80.png">

- gcc *.c (This step in case any changes were made)

<img width="568" alt="198119475-a23eaef9-1e64-4aad-87ca-3f6538b91b53" src="https://user-images.githubusercontent.com/118260014/201893219-bd01895e-3d82-42cb-9421-c39b5e126939.png">

- ./a.out

<img width="598" alt="198119629-de2d6442-b00a-4244-94e2-3bc3a4a080eb" src="https://user-images.githubusercontent.com/118260014/201893234-6e28bd04-ba07-4a1b-bade-d53eb7ef00e2.png">

## Challenges 👩🏻‍💻

In This project the main challenge i faced is to learn and to know how to work with the variadic functions. Sense the built-in command printf take infinte number of arguments it was a challenge to figure how to implement the same function in my code, and the variadic functions were the answere. Implementing va_start(), va_arg() and va_end() gave my function the ability to accept infinite number of arguments.

## I hope that this project will benefit you by gaining sufficient information.

Dont hesitate to contact me if you need any help ^-^ : alal-ali@student.42abudhabi.ae
