#pragma once

namespace SQLite3
{
    enum class Result : int
    {
        OK = 0,
        Error = 1,
        Internal = 2,
        Perm = 3,
        Abort = 4,
        Busy = 5,
        Locked = 6,
        NoMem = 7,
        ReadOnly = 8,
        Interrupt = 9,
        IOError = 10,
        Corrupt = 11,
        NotFound = 12,
        Full = 13,
        CannotOpen = 14,
        LockErr = 15,
        Empty = 16,
        SchemaChngd = 17,
        TooBig = 18,
        Constraint = 19,
        Mismatch = 20,
        Misuse = 21,
        NotImplementedLFS = 22,
        AccessDenied = 23,
        Format = 24,
        Range = 25,
        NonDBFile = 26,
        Notice = 27,
        Warning = 28,
        Row = 100,
        Done = 101
    };

    enum class ExtendedResult : int
    {
        IOErrorRead = ((int)(int)Result::IOError | (1 << 8)),
        IOErrorShortRead = ((int)Result::IOError | (2 << 8)),
        IOErrorWrite = ((int)Result::IOError | (3 << 8)),
        IOErrorFsync = ((int)Result::IOError | (4 << 8)),
        IOErrorDirFSync = ((int)Result::IOError | (5 << 8)),
        IOErrorTruncate = ((int)Result::IOError | (6 << 8)),
        IOErrorFStat = ((int)Result::IOError | (7 << 8)),
        IOErrorUnlock = ((int)Result::IOError | (8 << 8)),
        IOErrorRdlock = ((int)Result::IOError | (9 << 8)),
        IOErrorDelete = ((int)Result::IOError | (10 << 8)),
        IOErrorBlocked = ((int)Result::IOError | (11 << 8)),
        IOErrorNoMem = ((int)Result::IOError | (12 << 8)),
        IOErrorAccess = ((int)Result::IOError | (13 << 8)),
        IOErrorCheckReservedLock = ((int)Result::IOError | (14 << 8)),
        IOErrorLock = ((int)Result::IOError | (15 << 8)),
        IOErrorClose = ((int)Result::IOError | (16 << 8)),
        IOErrorDirClose = ((int)Result::IOError | (17 << 8)),
        IOErrorSHMOpen = ((int)Result::IOError | (18 << 8)),
        IOErrorSHMSize = ((int)Result::IOError | (19 << 8)),
        IOErrorSHMLock = ((int)Result::IOError | (20 << 8)),
        IOErrorSHMMap = ((int)Result::IOError | (21 << 8)),
        IOErrorSeek = ((int)Result::IOError | (22 << 8)),
        IOErrorDeleteNoEnt = ((int)Result::IOError | (23 << 8)),
        IOErrorMMap = ((int)Result::IOError | (24 << 8)),
        LockedSharedcache = ((int)Result::Locked | (1 << 8)),
        BusyRecovery = ((int)Result::Busy | (1 << 8)),
        CannottOpenNoTempDir = ((int)Result::CannotOpen | (1 << 8)),
        CannotOpenIsDir = ((int)Result::CannotOpen | (2 << 8)),
        CannotOpenFullPath = ((int)Result::CannotOpen | (3 << 8)),
        CorruptVTab = ((int)Result::Corrupt | (1 << 8)),
        ReadonlyRecovery = ((int)Result::ReadOnly | (1 << 8)),
        ReadonlyCannotLock = ((int)Result::ReadOnly | (2 << 8)),
        ReadonlyRollback = ((int)Result::ReadOnly | (3 << 8)),
        AbortRollback = ((int)Result::Abort | (2 << 8)),
        ConstraintCheck = ((int)Result::Constraint | (1 << 8)),
        ConstraintCommitHook = ((int)Result::Constraint | (2 << 8)),
        ConstraintForeignKey = ((int)Result::Constraint | (3 << 8)),
        ConstraintFunction = ((int)Result::Constraint | (4 << 8)),
        ConstraintNotNull = ((int)Result::Constraint | (5 << 8)),
        ConstraintPrimaryKey = ((int)Result::Constraint | (6 << 8)),
        ConstraintTrigger = ((int)Result::Constraint | (7 << 8)),
        ConstraintUnique = ((int)Result::Constraint | (8 << 8)),
        ConstraintVTab = ((int)Result::Constraint | (9 << 8)),
        NoticeRecoverWAL = ((int)Result::Notice | (1 << 8)),
        NoticeRecoverRollback = ((int)Result::Notice | (2 << 8))
    };
}



class SQLiteException sealed : public std::exception
{
public:
    SQLite3::Result getResult()
    {
        return SQLite3::Result::Busy;
    }
};

ref class SQLite sealed
{

public:
    SQLite();
};