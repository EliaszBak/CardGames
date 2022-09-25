cmake_minimum_required(VERSION 3.22)

project(PriceDownloader)
set(CMAKE_CXX_STANDARD 17)
add_executable(CardGames main.cpp Card.cpp Deck.cpp Player.cpp Casino.cpp Menu.cpp)
target_link_libraries(CardGames PRIVATE -lX11 -lGL -lpthread -lpng -lstdc++fs)
