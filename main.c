#include "libft.h"
#include <locale.h>
#include <stdio.h>
#include <wchar.h>
int	main(void)
{
	setlocale(LC_ALL, "UTF-8");
	wchar_t *wcs = L"ceci est un test";
	wchar_t wc = L'ǅ';
	int ret = 0;

	ft_putwc_fd(wc, 1);
	ret = printf("\nwcs:%ls\n", wcs);
	printf("sizepf=%d\n", ret);
	ret = ft_putwcs_fd(wcs, 1);
	printf("\nret_putwcs=%d ft_wcslen=%lu\n", ret, ft_wcslen(wcs));
	printf("real_fun=%lu\n", wcslen(wcs));
	return (0);
}
