# Test
ДЛЯ ВСЕХ ЗАДАЧ: файл со входными данными пользователь должен указывать сам (без хардкода). Задачи сдавать в виде: исходный код, примеры файлов с входными данными, и файл, который можно сразу запускать - уже скомпилированный, если язык того требует (если C#, C++ и т.д. - *.exe, если Java, Scala - *.jar и т.д.). Будет плюсом, если зальете решение в github.      1. Считать из файла последовательность целых чисел. Вычислить 90 персентиль, медиану, максимальное, минимальное и среднее значения. На вход программа получает файл с числами. Каждое число в файле находится на новой строке. Вывод в консоль должен быть следующим:  90 percentile &lt;значение> median &lt;значение> average &lt;значение> max &lt;значение> min &lt;значение>       2. В файле хранятся координаты вершин четырехугольника в порядке обхода фигуры по часовой стрелке в виде: &lt;координата x1> &lt;координата y1> &lt;координата x2> &lt;координата y2> &lt;координата x3> &lt;координата y3> &lt;координата x4> &lt;координата y4>  Считаем, что полученные из файла вершины гарантированно образуют выпуклый четырехугольник. Написать программу, которая считывает координаты из файла. При запуске ждет от пользователя ввода координат некой точки и выводит один из четырех возможных результатов:  точка внутри четырехугольника точка лежит на сторонах четырехугольника точка - вершина четырехугольника точка снаружи четырехугольника      3. В магазине 5 касс, в каждый момент времени к кассе стоит очередь некоторой длины. Каждые 30 минут измеряется средняя длина очереди в каждую кассу и для каждой кассы это значение (число вещественное) записывается в соответсвующий ей файл (всего 5 файлов), магазин работает 8 часов в день. Рассматривается только один день. На момент запуска приложения все значения уже находятся в файлах. Написать программу, которая по данным замеров определяет интервал времени, когда в магазине было наибольшее количество посетителей за день.       4*. В течение дня в банк заходят люди, у каждого человека есть время захода в банк и время выхода. Всего за день у банка было N посетителей. Банк работает с 8:00 до 20:00. Человек посещает банк только один раз за день. Написать программу, которая определяет периоды времени, когда в банке было максимальное количество посетителей. Входные данные о посетителях программа должна получать из файла, формат файла - произвольный, файл высылается вместе с решением.
