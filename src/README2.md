# Program: Kalkulator BMI

Prosty program napisany w języku C, który oblicza **BMI (Body Mass Index)** na podstawie wprowadzonego wzrostu i wagi, a następnie klasyfikuje wynik według standardowych kategorii:

- Niedowaga
- Prawidłowa masa ciała
- Nadwaga
- Otyłość

---

## Opis działania programu

1. Program prosi użytkownika o podanie wzrostu w centymetrach.
2. Konwertuje wzrost na metry.
3. Program prosi użytkownika o podanie wagi w kilogramach.
4. Oblicza BMI według wzoru:

```

BMI = waga[kg] / (wzrost[m])^2

````

5. Wyświetla odpowiednią kategorię w zależności od wyniku.

---

## Kompilacja

Program skompilowany przy użyciu **clang-cl**:

```bash
C:\Users\X\Desktop\praca C> clang-cl bmi.c
```

> ⚠️ Podczas kompilacji pojawiają się ostrzeżenia dotyczące funkcji `scanf`:
>
> ```
> bmi.c(7,4): warning: 'scanf' is deprecated...
> bmi.c(10,5): warning: 'scanf' is deprecated...
> ```
>
> Można je zignorować lub użyć `scanf_s`, albo dodać na początku pliku:
>
> ```c
> #define _CRT_SECURE_NO_WARNINGS
> ```

---

## Uruchomienie programu

```bash
C:\Users\X\Desktop\praca C>bmi.exe
```

Program poprosi o dane i wyświetli wynik BMI.

### Przykłady danych i wyników:

```
Podaj wzrost w centymetrach: 187
Podaj wage: 64
BMI ≈ 18.3 --> niedowaga
```

```
Podaj wzrost w centymetrach: 186
Podaj wage: 70
BMI ≈ 20.2 --> prawidłowe
```

---

## Środowisko

* **Edytor:** Visual Studio Code
* **Kompilator:** clang-cl
* **System:** Windows

```
