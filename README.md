\\\\\ Program skompilowany przy użyciu kompilatora Clang. Korzystałem z edytora MS Visual Studio Code \\\\\



C:\Users\X\Desktop\praca C>clang -Wall zad1.c
zad1.c:7:4: warning: 'scanf' is deprecated: This function or variable may be unsafe. Consider using scanf_s instead. To
      disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details. [-Wdeprecated-declarations]
    7 |    scanf("%f", &v_ms);
      |    ^
C:\Program Files (x86)\Windows Kits\10\include\10.0.26100.0\ucrt\stdio.h:1275:20: note: 'scanf' has been explicitly
      marked deprecated here
 1275 |     _Check_return_ _CRT_INSECURE_DEPRECATE(scanf_s)
      |                    ^
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include\vcruntime.h:368:55: note:
      expanded from macro '_CRT_INSECURE_DEPRECATE'
  368 |         #define _CRT_INSECURE_DEPRECATE(_Replacement) _CRT_DEPRECATE_TEXT(    \
      |                                                       ^
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include\vcruntime.h:358:47: note:
      expanded from macro '_CRT_DEPRECATE_TEXT'
  358 | #define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated(_Text))
      |                                               ^
1 warning generated.



Sposób uruchomienia oraz przykłady danych:

C:\Users\X\Desktop\praca C>zad1.exe
Podaj predkosc wiatru w m/s: 2
B=1 (Light Air)
C:\Users\X\Desktop\praca C>

C:\Users\X\Desktop\praca C>zad1.exe
Podaj predkosc wiatru w m/s: 3
B=2 (Light Breeze)
C:\Users\X\Desktop\praca C>
