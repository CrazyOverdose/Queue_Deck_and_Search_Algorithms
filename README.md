# Задача 1. Поиск ближайшего элемента

Напишите функцию FindNearestElement, для множества целых чисел numbers и данного числа border возвращающую итератор на элемент множества, ближайший к border. Если ближайших элементов несколько, верните итератор на наименьший из них.

```
set<int>::const_iterator FindNearestElement(
    const set<int>& numbers,
    int border);
// set<int>::const_iterator —
// тип итераторов для константного множества целых чисел
```

# Задача 2. Группировка строк по префиксу.

## Часть 1. Группировка по символу

Напишите функцию FindStartsWith:
+ принимающую отсортированный набор строк в виде итераторов range_begin, range_end и один символ prefix;
+ возвращающую диапазон строк, начинающихся с символа prefix, в виде пары итераторов.

```
template <typename RandomIt>
pair<RandomIt, RandomIt> FindStartsWith(
    RandomIt range_begin, RandomIt range_end,
    char prefix);
```
Если итоговый диапазон пуст, его границы должны указывать на то место в контейнере, куда можно без нарушения порядка сортировки вставить любую строку, начинающуюся с символа prefix (подобно алгоритму equal_range). Гарантируется, что строки состоят лишь из строчных латинских букв и символ prefix также является строчной латинской буквой.

Поиск должен осуществляться за логарифмическую сложность — например, с помощью двоичного поиска.

## Часть 2. Группировка по префиксу

Напишите более универсальный вариант функции FindStartsWith, принимающий в качестве префикса произвольную строку, состоящую из строчных латинских букв.

```
template <typename RandomIt>
pair<RandomIt, RandomIt> FindStartsWith(
    RandomIt range_begin, RandomIt range_end,
    const string& prefix);
```

# Задача 3. Построение арифметического выражения

## Часть 1.

Реализуйте построение арифметического выражения согласно следующей схеме:

+ изначально есть выражение, состоящее из некоторого целого числа x;
+ на каждом шаге к текущему выражению применяется некоторая операция: прибавление числа, вычитание числа, умножение на число или деление на число; перед применением операции выражение всегда должно быть заключено в скобки.

### Формат ввода
В первой строке содержится исходное целое число x. Во второй строке содержится целое неотрицательное число N— количество операций. В каждой из следующих N строк содержится очередная операция:

+ прибавление числа a: + a;
+ либо вычитание числа b: - b;
+ либо умножение на число c: * c;
+ либо деление на число d: / d.
Количество операций может быть нулевым — в этом случае необходимо вывести исходное число.

### Формат вывода
Выведите единственную строку — построенное арифметическое выражение.

Обратите внимание на расстановку пробелов вокруг символов:

+ каждый символ бинарной операции (+, -, * или /) должен быть окружён ровно одним пробелом с каждой стороны: (8) * 3;
+ символ унарного минуса (для отрицательных чисел) не нуждается в дополнительном пробеле: -5;
+ скобки и числа не нуждаются в дополнительных пробелах.

## Часть 2. Без лишних скобок

Модифицируйте решение предыдущей части так, чтобы предыдущее выражение обрамлялось скобками лишь при необходимости, то есть только в том случае, когда очередная операция имеет бо́льший приоритет, чем предыдущая.
