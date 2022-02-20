<h1 align="center">
	🧰 libft
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/surfi89/libft?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/surfi89/libft?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/surfi89/libft?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/surfi89/libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/surfi89/libft?color=green" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project

> _The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._

	Programming in C can be very tedious when you don't have access to the very useful standard functions.
	This project gives you the opportunity to rewrite those functions to understand them and learn to use them.
	The library will help you for your future projects in C. Through this project, you have the opportunity
	to extend your list of functions in your own way!

For more detailed information, look at the [**subject of this project**](https://github.com/Surfi89/42cursus/tree/main/Subject%20PDFs).

**NOTE:** To be successful with moulinette on this project I had to put all the files in the same directory.
I have just put them in folders and modified the Makefile to have a better organized repository.

## List of functions:

### Functions from `<ctype.h>` library

* [`ft_isascii`](sources/ft_isascii.c)			    - ASCII karakter testi.
* [`ft_isalnum`](sources/ft_isalnum.c)			    - alfanümerik karakter testi.
* [`ft_isalpha`](sources/ft_isalpha.c)			    - alfabetik karakter testi.
* [`ft_isdigit`](sources/ft_isdigit.c)			    - decimal-digit (alfa numerik) karakter testi
* [`ft_isprint`](sources/ft_isprint.c)			    - baskı karakter testi (boşluk karakteri dahil).
* [`ft_tolower`](sources/ft_tolower.c)			    - büyük harften küçük harfe dönüştürme.
* [`ft_toupper`](sources/ft_toupper.c)			    - küçük harften büyük harfe dönüştürme.
* [`ft_atoi`](sources/ft_atoi.c)		            - ASCII dizesini tam sayıya dönüştürün.
* [`ft_calloc`](sources/ft_calloc.c)	            - hafıza tahsisi.
* [`ft_bzero`](sources/ft_bzero.c)		            - bayt dizisine sıfırlar yazın.
* [`ft_memset`](sources/ft_memset.c)		        - bir bayt dizisine bir bayt yazın.
* [`ft_memchr`](sources/ft_memchr.c)		        - bayt dizesindeki baytı bulun.
* [`ft_memcmp`](sources/ft_memcmp.c)		        - bayt dizesini karşılaştırın.
* [`ft_memmove`](sources/ft_memmove.c)	            - bayt dizesini kopyala.
* [`ft_memcpy`](sources/ft_memcpy.c)		        - hafıza alanını kopyala.
* [`ft_strlen`](sources/ft_strlen.c)			    - dizenin uzunluğunu bulun.
* [`ft_strchr`](sources/ft_strchr.c)			    - dizedeki karakteri bulun (ilk oluşum).
* [`ft_strrchr`](sources/ft_strrchr.c)			    - dizedeki karakteri bulun (son oluşum).
* [`ft_strnstr`](sources/ft_strnstr.c)			    - bir dizgede bir alt dizgiyi bulun (boyutla sınırlı).
* [`ft_strncmp`](sources/ft_strncmp.c) 			    - dizeleri karşılaştırın (boyutla sınırlı).
* [`ft_strdup`](sources/ft_strdup.c)			    - bir dizenin bir kopyasını kaydedin (malloc ile).
* [`ft_strlcpy`](sources/ft_strlcpy.c)			    - boyuta bağlı dize kopyalama.
* [`ft_strlcat`](sources/ft_strlcat.c)			    - boyuta bağlı dize bitiştirme.
* [`ft_itoa`](sources/ft_itoa.c)				    - tamsayıyı ASCII dizesine dönüştürün.
* [`ft_substr`](sources/ft_substr.c)			    - dizeden alt dizeyi çıkarın.
* [`ft_strtrim`](sources/ft_strtrim.c)			    - belirtilen karakterlerle dizenin başlangıcını ve sonunu kırpın.
* [`ft_strjoin`](sources/ft_strjoin.c)			    - iki dizgiyi yeni bir dizgede birleştirin (malloc ile).
* [`ft_split`](sources/ft_split.c)				    - sınırlayıcı olarak belirtilen karakterle dizeyi bir dizi diziye bölme.
* [`ft_strmapi`](sources/ft_strmapi.c)			    - belirtilen işlevle dizeyi değiştirerek yeni dize oluşturun.
* [`ft_striteri`](sources/ft_striteri.c)		    - 
* [`ft_putchar_fd`](sources/ft_putchar_fd.c)	    - verilen dosyaya bir karakter çıktısı alın.
* [`ft_putstr_fd`](sources/ft_putstr_fd.c)		    - verilen dosyaya çıktı dizesi.
* [`ft_putendl_fd`](sources/ft_putendl_fd.c)	    - yeni satır ile verilen dosyaya çıktı dizesi.
* [`ft_putnbr_fd`](sources/ft_putnbr_fd.c)		    - verilen dosyaya tam sayı çıktısı.
* [`ft_lstnew`](sources/ft_lstnew.c)			    - yeni liste oluştur.
* [`ft_lstsize`](sources/ft_lstsize.c)			    - bir listenin öğelerini sayın.
* [`ft_lstlast`](sources/ft_lstlast.c)			    - listenin son öğesini bulun.
* [`ft_lstadd_back`](sources/ft_lstadd_back.c)	    - listenin sonuna yeni eleman ekleyin.
* [`ft_lstadd_front`](sources/ft_lstadd_front.c)    -  listenin başına yeni eleman ekleyin.
* [`ft_lstdelone`](sources/ft_lstdelone.c)		    - listeden öğeyi sil.
* [`ft_lstclear`](sources/ft_lstclear.c)			- bir başlangıç ​​noktasından liste öğelerinin sırasını silin.
* [`ft_lstiter`](sources/ft_lstiter.c)			    - tüm liste öğelerinin içeriğine işlevi uygulayın.
* [`ft_lstmap`](sources/ft_lstmap.c)				- tüm liste öğelerinin içeriğine işlevi yeni listeye uygulayın.w list.


## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, go to its path and run:

For all mandatory functions:

```shell
$ make
```

For bonus functions:

```shell
$ make bonus
```

**2. Cleaning all binary (.o) and executable files (.a)**

To clean all files generated while doing a make, go to the path and run:

```shell
$ make fclean
```

**3. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

## 📋 Testing

You can use any of this third party testers to test the project


* [Tripouille/libfTester](https://github.com/Tripouille/libftTester)
* [ska42/libft-war-machine](https://github.com/ska42/libft-war-machine)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
