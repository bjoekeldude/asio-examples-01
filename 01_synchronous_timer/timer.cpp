//copied from Christopher Kohlhoff

#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

int main()
{
	boost::asio::io_context io;

	boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
	std::cout << "Start!" << std::endl;
	t.wait();

	std::cout << "Stopp!" << std::endl;
}

