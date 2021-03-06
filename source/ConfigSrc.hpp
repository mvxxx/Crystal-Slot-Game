/*
mvxxx 2018
https://github.com/mvxxx
*/

#pragma once

#include <SDL.h>
#include <SDL_image.h>

#include <map>
#include <string>
#include <wrappers/Vector2.hpp>

namespace mv
{
  namespace constants
  {
    namespace audio
    {
      enum class AUDIO_ID
      {
        SOUNDTRACK,
        CLICK,
        PLAY
      };

      const std::map<AUDIO_ID, std::string> audioKey
      {
        { AUDIO_ID::SOUNDTRACK,"SOUNDTRACK" },
        { AUDIO_ID::CLICK,"CLICK" },
        { AUDIO_ID::PLAY,"PLAY" },
      };
    }

    namespace error
    {
      namespace scene
      {
        constexpr auto FAILED_IMG = "Failed to init SDL_Image";
        constexpr auto FAILED_TTF = "Failed to init SDL_TTF";
      }

      namespace banditMachine
      {
        constexpr auto PROCESSING = "You can't start new simulate because bandit machine is processing now.";
        constexpr auto LACK_OF_SYMBOLS = "There is not enough symbols in the scene. Add some befoure you start a game." ;
      }

      namespace textMachine
      {
        constexpr auto NOT_ENOUGH_MONEY = "You have't got enough money to do that.";
        constexpr auto POSITIVE_RATE = "Rate must be positive value";
      }

      namespace audio
      {
        constexpr auto SDL_MIXER = "Failed to initialize SDL_mixer.";
        constexpr auto PLAY_MUSIC = "Failed to play music.";
      }

      namespace UI
      {
        constexpr auto TOO_CLOSE_VERTICALLY = "The elements are too close together vertically! This can make it difficult to play.";
        constexpr auto TOO_CLOSE_HORIZONTALLY = "The elements are too close together horizontally! This can make it difficult to play.";
        constexpr auto SOLUTION = "Replace textures or modify 'technicalities' file.";
      }
    }

    namespace texture
    {
      enum class TEXTURE_ID
      {
        BUTTON_PLUS,
        BUTTON_MINUS,
        RATE,
        SYMBOL_1,
        SYMBOL_2,
        SYMBOL_3,
        PRIZE,
        CREDITS,
        PLAY,
        BACKGROUND
      };

      /*id/Key*/
      const std::map<TEXTURE_ID, std::string> textureKey
      {
        { TEXTURE_ID::BUTTON_PLUS,"PLUS" },
        { TEXTURE_ID::BUTTON_MINUS,"MINUS" },
        { TEXTURE_ID::SYMBOL_1 ,"SYMBOL_1" },
        { TEXTURE_ID::SYMBOL_2 ,"SYMBOL_2" },
        { TEXTURE_ID::SYMBOL_3 ,"SYMBOL_3" },
        { TEXTURE_ID::RATE,"RATE" },
        { TEXTURE_ID::PRIZE,"PRIZE" },
        { TEXTURE_ID::CREDITS,"CREDITS" },
        { TEXTURE_ID::PLAY,"PLAY" },
        { TEXTURE_ID::BACKGROUND, "BACKGROUND"}
      };

      constexpr auto BASIC_TEXTURE_PATH = "source/data/graphics/";
    }

    namespace textTypes
    {
      enum class TYPE
      {
        RATE,
        PRIZE,
        CREDITS
      };
    }

    namespace loader
    {
      constexpr auto GRAPHIC_CONFIG = "source/data/config/graphic.txt";
      constexpr auto AUDIO_CONFIG = "source/data/config/audio.txt";
      constexpr auto TECHNICALITIES_CONFIG = "source/data/config/technicalities.txt";

      enum class CONFIG_MODE
      {
        GRAPHIC,
        AUDIO,
        TECHNICALITIES
      };

      enum class STORAGE_MODE
      {
        STORE,
        FREE
      };
    }
  }
}