#include "span.hpp"

int main()
{
	Span sp = Span(5);
	// sp.addRange(0, 5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}


// int main() {
//     try {
//         Span sp(1);
//         sp.addNumber(1);
//         // sp.addNumber(2);
//         // sp.addNumber(3);
//         // sp.addNumber(4);
// 		sp.longestSpan();
//     } catch (const std::exception& e) {
//         std::cout << e.what() << std::endl;
//     }
//     return 0;
// }