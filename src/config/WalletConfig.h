// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2020, The Ionize Developers
// Copyright (c) 2018, The DeroGold Association
// Copyright (c) 2020 The Ionize Developers.
//
// Please see the included LICENSE file for more information.

#pragma once

#include <config/CryptoNoteConfig.h>

namespace WalletConfig
{
    const std::string_view addressPrefix = "QU";

    const std::string ticker = "QUATRE";

    const std::string csvFilename = "transactions.csv";

    const std::string addressBookFilename = ".addressBook.json";

    const std::string daemonName = "QuatreDaemon";

    const std::string walletName = "QuatreWallet";

    const std::string walletdName = "QuatreService";

    const std::string coinName = std::string(CryptoNote::CRYPTONOTE_NAME);

    const std::string contactLink = "https://t.me/Quatre_Official";

    const uint8_t numDecimalPlaces = CryptoNote::parameters
                                               ::CRYPTONOTE_DISPLAY_DECIMAL_POINT;

    const uint16_t standardAddressLength = 97;

    const uint16_t integratedAddressLength = standardAddressLength
                                           + ((64 * 11) / 8);

    const uint64_t defaultFee = CryptoNote::parameters::MINIMUM_FEE;

    const uint64_t minimumFee = CryptoNote::parameters::MINIMUM_FEE;

    const uint64_t minimumSend = 1;

    const bool mixinZeroDisabled = false;

    const uint64_t mixinZeroDisabledHeight = 0;

    const bool processCoinbaseTransactions = true;
}
